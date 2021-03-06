/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 *
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package test.org.oss.pdfreporter;

import java.util.logging.Handler;
import java.util.logging.Logger;

import org.junit.Test;
import org.oss.pdfreporter.PdfReporter;
import org.oss.pdfreporter.repo.RepositoryManager;

import test.org.oss.pdfreporter.providers.DesktopTestProvider;
import test.org.oss.pdfreporter.providers.TestProviderInterface;


public class RealestateTest {
	private TestProviderInterface testProvider;

	// DRIVERS for Java
	private static final String HSQLDB_URLPREFIX = "jdbc:hsqldb:hsql://";
	private static final String HSQLDB_JDBC_DRIVER = "org.hsqldb.jdbcDriver";

	// FOLDERS
	private static final String JRXML_RESOURCE_FOLDER = "resource";
	private static final String JRXML_REPORT_FOLDER = "testdata/jrxml";
	private static final String XML_DATASOURCE_FOLDER = "datasource";
	private static final String PDF_OUTPUT_FOLDER = "testdata/pdf/java";

	// DESIGN REPORTS
	private static final String DESIGN_REPORT_REALESTATE_CHEKLIST_IN_DE = "realestate-checklist-movein-de.jrxml";
	private static final String DESIGN_REPORT_REALESTATE_CHEKLIST_OUT_DE = "realestate-checklist-moveout-de.jrxml";
	private static final String DESIGN_REPORT_REALESTATE_DEFECT_DE = "realestate-defectgallery-de.jrxml";

	private static final String DESIGN_REPORT_REALESTATE_CHEKLIST_IN_EN = "realestate-checklist-movein-en.jrxml";
	private static final String DESIGN_REPORT_REALESTATE_CHEKLIST_OUT_EN = "realestate-checklist-moveout-en.jrxml";
	private static final String DESIGN_REPORT_REALESTATE_DEFECT_EN = "realestate-defectgallery-en.jrxml";



	public RealestateTest() {
		this(true, new DesktopTestProvider());
	}

	protected RealestateTest(boolean initJava, TestProviderInterface testProvider) {
		this.testProvider = testProvider;
		if (initJava) {
			try {
				Class<?>[] noArgs = new Class[0];
				Object noInstance = null;
				Object[] noParams = new Object[0];
				Class<?> bridgeHandler = Class.forName("org.slf4j.bridge.SLF4JBridgeHandler");
				bridgeHandler.getMethod("removeHandlersForRootLogger", noArgs).invoke(noInstance, noParams);
				bridgeHandler.getMethod("install", noArgs).invoke(noInstance, noParams);
				Class<?> sqlFactory = Class.forName("org.oss.pdfreporter.sql.SqlFactory");
				sqlFactory.getMethod("registerFactory", new Class<?>[] {String.class,String.class}).invoke(noInstance, new Object[] {HSQLDB_JDBC_DRIVER, HSQLDB_URLPREFIX});
			} catch (Exception e) {
				throw new RuntimeException(e);
			}
		} else {
			try {

			Logger logger = Logger.getLogger("");
			Handler[] handlers = logger.getHandlers();
			for(Handler hndl :handlers) {
				logger.removeHandler(hndl);
			}

			} catch (Exception e) {

			}
		}
	}


	@Test
	public void exportRealEstateChecklistMoveInDe() throws Exception {
		getExporter(DESIGN_REPORT_REALESTATE_CHEKLIST_IN_DE, "digireport-realestate-checklist-v0","extra-fonts")
			.setSqlSource(testProvider.databasePath(), "sa", "")
			.exportPdf();
	}
	@Test
	public void exportRealEstateChecklistMoveOutDe() throws Exception {
		getExporter(DESIGN_REPORT_REALESTATE_CHEKLIST_OUT_DE, "digireport-realestate-checklist-v0","extra-fonts")
			.setSqlSource(testProvider.databasePath(), "sa", "")
			.exportPdf();
	}
	@Test
	public void exportRealEstateDefectDe() throws Exception {
		getExporter(DESIGN_REPORT_REALESTATE_DEFECT_DE, "digireport-realestate-checklist-v0","extra-fonts")
			.setSqlSource(testProvider.databasePath(), "sa", "")
			.exportPdf();
	}
	@Test
	public void exportRealEstateChecklistMoveInEn() throws Exception {
		getExporter(DESIGN_REPORT_REALESTATE_CHEKLIST_IN_EN, "digireport-realestate-checklist-v0","extra-fonts")
			.setSqlSource(testProvider.databasePath(), "sa", "")
			.exportPdf();
	}
	@Test
	public void exportRealEstateChecklistMoveOutEn() throws Exception {
		getExporter(DESIGN_REPORT_REALESTATE_CHEKLIST_OUT_EN, "digireport-realestate-checklist-v0","extra-fonts")
			.setSqlSource(testProvider.databasePath(), "sa", "")
			.exportPdf();
	}
	@Test
	public void exportRealEstateDefectEn() throws Exception {
		getExporter(DESIGN_REPORT_REALESTATE_DEFECT_EN, "digireport-realestate-checklist-v0","extra-fonts")
			.setSqlSource(testProvider.databasePath(), "sa", "")
			.exportPdf();
	}

	private PdfReporter getExporter(String jrxml, String reportFolder, String extraFolder) {
		RepositoryManager repo = RepositoryManager.getInstance();
		repo.setDefaultResourceFolder(inputPath(JRXML_RESOURCE_FOLDER));
		repo.setDefaulReportFolder(inputPath(JRXML_REPORT_FOLDER + RepositoryManager.PATH_DELIMITER + reportFolder));
		if (null != extraFolder) {
			repo.addExtraReportFolder(inputPath(JRXML_REPORT_FOLDER + RepositoryManager.PATH_DELIMITER + extraFolder));
		}
		repo.addExtraReportFolder(inputPath(XML_DATASOURCE_FOLDER));

		return new PdfReporter(jrxml, outputPath(PDF_OUTPUT_FOLDER), JEvalDesktopExporterTest.getFilenameFromJrxml(jrxml));
	}

	public String inputPath(String path) {
		if(testProvider != null) return testProvider.inputPath(path);
		else return path;
	}

	public String outputPath(String path) {
		if(testProvider != null) return testProvider.outputPath(path);
		else return path;
	}


}
